<#
.SYNOPSIS
    Creates a new Problem of the Day (POTD) solution file and updates the tracking log.

.DESCRIPTION
    Scaffolds a C++ solution template for LeetCode or GeeksforGeeks POTD, organized by
    YYYY-MM, and appends the entry to 16-POTD/README.md.

.EXAMPLE
    .\16-POTD\new-potd.ps1 -Platform LeetCode -Title "Two Sum" -Difficulty Easy -Topic "Array, Hash Table" -Url "https://leetcode.com/problems/two-sum"

.EXAMPLE
    .\16-POTD\new-potd.ps1 (Interactive mode prompts for details)
#>

[CmdletBinding()]
param (
    [Parameter(Mandatory = $false)]
    [string]$Platform,

    [Parameter(Mandatory = $false)]
    [string]$Title,

    [Parameter(Mandatory = $false)]
    [string]$Difficulty,

    [Parameter(Mandatory = $false)]
    [string]$Topic,

    [Parameter(Mandatory = $false)]
    [string]$Url = "",

    [Parameter(Mandatory = $false)]
    [string]$Date = (Get-Date -Format "yyyy-MM-dd")
)

# Interactive prompts if required parameters are missing
if (-not $Platform) {
    Write-Host "Select Platform:" -ForegroundColor Cyan
    Write-Host "  1. LeetCode"
    Write-Host "  2. GeeksforGeeks"
    $choice = Read-Host "Enter 1 or 2 (default: 1)"
    if ($choice -eq "2") { $Platform = "GeeksforGeeks" } else { $Platform = "LeetCode" }
}

# Normalize platform
if ($Platform -match "^(?i)(lc|leetcode)$") {
    $Platform = "LeetCode"
} elseif ($Platform -match "^(?i)(gfg|geeksforgeeks)$") {
    $Platform = "GeeksforGeeks"
} else {
    Write-Warning "Unknown platform '$Platform'. Defaulting to LeetCode."
    $Platform = "LeetCode"
}

if (-not $Title) {
    $Title = Read-Host "Enter Problem Title"
    while (-not $Title) {
        $Title = Read-Host "Title cannot be empty. Enter Problem Title"
    }
}

if (-not $Difficulty) {
    Write-Host "Select Difficulty:" -ForegroundColor Cyan
    Write-Host "  1. Easy"
    Write-Host "  2. Medium"
    Write-Host "  3. Hard"
    $diffChoice = Read-Host "Enter 1, 2, or 3 (default: 2)"
    switch ($diffChoice) {
        "1" { $Difficulty = "Easy" }
        "3" { $Difficulty = "Hard" }
        default { $Difficulty = "Medium" }
    }
}

if (-not $Topic) {
    $Topic = Read-Host "Enter Topic tags (e.g. Array, DP, Tree - optional)"
    if (-not $Topic) { $Topic = "General" }
}

if (-not $Url) {
    $Url = Read-Host "Enter Problem Link (optional)"
}

# Format directories and file name
$slug = ($Title.ToLower() -replace '[^a-z0-9]+', '-' -replace '^-|-$', '')
$monthFolder = $Date.Substring(0, 7)
$baseDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$targetDir = Join-Path $baseDir (Join-Path $Platform $monthFolder)

if (-not (Test-Path $targetDir)) {
    New-Item -ItemType Directory -Path $targetDir -Force | Out-Null
}

$fileName = "$Date-$slug.cpp"
$filePath = Join-Path $targetDir $fileName
$relPath = "./$Platform/$monthFolder/$fileName"

# Generate C++ Boilerplate if file does not exist
if (-not (Test-Path $filePath)) {
    $template = @"
/**
 * ============================================================================
 * Problem:     $Title
 * Platform:    $Platform
 * Date:        $Date
 * Difficulty:  $Difficulty
 * Topic:       $Topic
 * Link:        $Url
 * ============================================================================
 * Approach:
 * - 
 *
 * Complexity:
 * - Time Complexity:  O()
 * - Space Complexity: O()
 * ============================================================================
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // TODO: Implement solution method
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    cout << "POTD: $Title ($Platform - $Date) ready for test run.\n";
    return 0;
}
"@
    Set-Content -Path $filePath -Value $template -Encoding UTF8
    Write-Host "[CREATED] Solution file: $filePath" -ForegroundColor Green
} else {
    Write-Host "[EXISTS] File already exists: $filePath" -ForegroundColor Yellow
}

# Update 16-POTD/README.md Table
$readmePath = Join-Path $baseDir "README.md"
if (Test-Path $readmePath) {
    $readmeContent = Get-Content $readmePath -Raw -Encoding UTF8
    $rowCheck = "$Date-$slug.cpp"
    if ($readmeContent -notmatch [regex]::Escape($rowCheck)) {
        $linkMarkdown = if ($Url) { "[$Title]($Url)" } else { $Title }
        $diffBadge = switch ($Difficulty) {
            "Easy"   { "**Easy**" }
            "Medium" { "**Medium**" }
            "Hard"   { "**Hard**" }
            default  { $Difficulty }
        }
        $newRow = "| ``$Date`` | $Platform | $linkMarkdown | $diffBadge | $Topic | [`Code`]($relPath) | O(...) / O(...) |"

        # Check if table header exists in README
        if ($readmeContent -match "\| Date \| Platform \| Problem Title \| Difficulty \| Topic \| Solution \| Complexity \|") {
            # Insert right below the separator line
            $separatorPattern = "(\| :---: \| :---: \| :--- \| :---: \| :--- \| :---: \| :---: \|\r?\n)"
            if ($readmeContent -match $separatorPattern) {
                $readmeContent = $readmeContent -replace $separatorPattern, "`$1$newRow`r`n"
                Set-Content -Path $readmePath -Value $readmeContent -Encoding UTF8
                Write-Host "[UPDATED] Added entry to $readmePath" -ForegroundColor Cyan
            }
        }
    } else {
        Write-Host "[LOGGED] Entry already recorded in $readmePath" -ForegroundColor Gray
    }
}

Write-Host "`nReady! Open in editor: $filePath" -ForegroundColor Magenta

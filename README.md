# Eagle Eye - simple mod that fixes the RAZBAM F-15E radar

### This mod is no longer needed! Eagle Dynamics has fixed the radar in RAZBAM's F-15E Strike Eagle.

This mod changes the date for some parts of DCS to June 13, 2024 and then the radar in the F-15E Strike Eagle will work. I'm using Microsoft's Detours (https://github.com/microsoft/Detours/) to replace a date function in Windows with a function that returns 13 june, 2024 instead of the current date. This is done in file "dllmain.cpp". The folder "Detours-main" contains a copy of Microsoft's Detours, and you can replace the folder with your own copy.

## Installation

All you have to do is download and extract the file EagleEye.zip from https://github.com/StrikeRat/EagleEye/releases to your DCS "Mods\Services" folder under "Saved Games", usually "C:\Users\<YOUR USERNAME>\Saved Games\DCS\Mods\Services".

If you don't have the folder(s) "Mods\Services", create them.

Extract the "EagleEye" folder from the zip-file to "Mods\Services". The correct path should be "C:\Users\<YOUR USERNAME>\Saved Games\DCS\Mods\Services\EagleEye".

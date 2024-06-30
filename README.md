# Eagle Eye

Since June 14, 2024, the radar in RAZBAM's F-15E Strike Eagle has stopped working. This is because of a certificate with an expiry date of 13 June 2024.

A fix for this is to start DCS, change the computer's date to June 13, 2024 or earlier, and then start a mission with the F-15E.

This works, but for me it caused problems with other programs I have on my computer.

This mod changes the date for some parts of DCS to June 13, 2024 and then the radar in the F-15E Strike Eagle will work. I'm using Microsoft's Detours (https://github.com/microsoft/Detours/) to replace a date function in Windows with a function that returns 13 june, 2024 instead of the current date.

## Installation

All you have to do is copy and paste the the included zip-file from https://github.com/StrikeRat/EagleEye/releases to your DCS "Mods\Services" folder under "Saved Games", usually "C:\Users\<YOUR USERNAME>\Saved Games\DCS\Mods\Services".

If you don't have the folder(s) "Mods\Services", create them.

Copy the "EagleEye" folder from the zip-file to "Mods\Services". The correct path should be "C:\Users\<YOUR USERNAME>\Saved Games\DCS\Mods\Services\EagleEye" and in the "EagleEye" folder you should have the following files and folders:

- entry.lua
- bin\EagleEye.dll
- Theme\icon.png
- Theme\icon-38x38.png
- Theme\icon-76x76.png
- Theme\icon_active.png
- Theme\icon_buy.png
- Theme\icon_select.png

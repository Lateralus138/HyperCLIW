<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

# Hyper CLI Windows/Wrapper

Wrapper for the HyperCLI (`hyper.cmd`,  *Windows only*), the special plugin cli for *Hyper Terminal* [[hyper.is](https://hyper.is/)] written in *C++*.

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## Table of Contents
- [Hyper CLI Windows/Wrapper](#hyper-cli-windowswrapper)
  - [Table of Contents](#table-of-contents)
  - [About](#about)
    - [Disclaimer](#disclaimer)
    - [Description](#description)
  - [Usage](#usage)
    - [Installation](#installation)
    - [Command Line](#command-line)
  - [Project](#project)
    - [Files](#files)
    - [Project Information](#project-information)
      - [MD5 Information](#md5-information)
        - [Current X86 MD5](#current-x86-md5)
        - [Current X64 MD5](#current-x64-md5)
      - [Miscellaneous Information](#miscellaneous-information)
        - [Overall Status](#overall-status)
        - [Latest Version Status](#latest-version-status)
  - [Media](#media)
    - [Logo Icon](#logo-icon)
  - [LICENSE](#license)

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## About

### Disclaimer

🚨🚨🚨🚨🚨🚨🚨🚨🚨🚨🚨

I'm in no way connected to the *Hyper Terminal* project but as someone who's main focus in programming is the command line I'm familiar with the application and its usage in *Windows* and *Linux*.

<sub>All of this project is created and maintained by me with the exception of the *Hyper* logo icon.</sub>

### Description

This is a command line wrapper for the command line script plugin tool `hyper.cmd` which in itself is a *Windows* (only) wrapper for its corresponding `cli.js` file which is called like this:

```Cmd
...
call "%~dp0..\..\Hyper.exe" "%~dp0..\..\resources\bin\cli.js" %*
...
```

In Windows we sometimes have problems with it being in `%PATH%` and while I can always add the path to my environment I decided to write this tool that can be ran from anywhere, especially if it's in a place already in `%PATH%` (that way I don't have to add a new path).

You can find the *Hyper Terminal* here: [https://hyper.is](https://hyper.is/)

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## Usage

### Installation

No installation necessary, this is a single binary with no external dependencies.

Place this in any directory that is in your `%PATH%` to run relatively (`HyperCLIW <...>`) otherwise you you have to know the full path; e.g.:

```Cmd
C:\your\full\path\HyperCLIW.exe i hyperterm-visor 
```

### Command Line

This program runs just like the script would so you would just pass the normal arguments as such in Powershell:

```PowerShell
  & 'HyperCLIW.exe' i verminal
```

in CMD:

```Cmd
  HyperCLIW.exe u hyper-pane
  rem HyperCLIW u hyper-pane
```

etc...

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## Project

### Files

All current compiled files and the source of this project can be found at this repository in the **`Releases`** section under **`Stable Release`** and can be found in 32 (*X86*) and 64 (*X64*) bit format. ***This is the recommended method of download.***

[![CR](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/Lateralus138/HyperCLIW/master/Docs/Json/current_releases.json)](https://github.com/Lateralus138/HyperCLIW/releases/tag/1.0.0.0)

If something goes wrong you can also find them in the `Build` directory at the root of this project: [[Builds Directory](Build/)].

### Project Information

#### MD5 Information

This information is generated in a `GitHub Action` immedietly after the successful build of this project.

##### Current X86 MD5

![X86 MD5](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/Lateralus138/HyperCLIW/master/Docs/Json/hypercliw_x86_md5.json)

##### Current X64 MD5

![X64 MD5](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/Lateralus138/HyperCLIW/master/Docs/Json/hypercliw_x64_md5.json)

#### Miscellaneous Information

##### Overall Status

![Readme Card](https://github-readme-stats.vercel.app/api/pin/?username=Lateralus138&repo=HyperCLIW)

|Description|Status|
|:---:|:---:|
|Project Release Date|![GitHub Release Date](https://img.shields.io/github/release-date/Lateralus138/HyperCLIW?style=for-the-badge)|
|Total downloads for this project|![GitHub all releases](https://img.shields.io/github/downloads/Lateralus138/HyperCLIW/total?style=for-the-badge)|
|Complete repository size|![This Repo Size](https://img.shields.io/github/repo-size/Lateralus138/HyperCLIW?style=for-the-badge)|
|Commits in last month|![GitHub commit activity](https://img.shields.io/github/commit-activity/m/Lateralus138/HyperCLIW?style=for-the-badge)|
|Commits in last year|![GitHub commit activity](https://img.shields.io/github/commit-activity/y/Lateralus138/HyperCLIW?style=for-the-badge)|

##### Latest Version Status

|Description|Status|Number of Downloads|
|:---:|:---:|:---:|
|Latest Release version|![Release Version](https://img.shields.io/github/v/release/Lateralus138/HyperCLIW?style=for-the-badge)|![GitHub release (latest by date)](https://img.shields.io/github/downloads/Lateralus138/HyperCLIW/1.0.0.0/total?style=for-the-badge)|
|Latest Tag version, possible Pre-Release's|![Tag Version](https://img.shields.io/github/v/tag/Lateralus138/HyperCLIW?style=for-the-badge)|![GitHub release (latest by date)](https://img.shields.io/github/downloads/Lateralus138/HyperCLIW/1.0.0.0/total?style=for-the-badge)|

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## Media

### Logo Icon

<sub>Not my work.</sub>

![HyperLogo](Docs/Images/hyperterminallogo.png)

<img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px"><img  alt="Hyper Logo" src="Docs/Images/hyperterminallogo.png" width="32px">

## [LICENSE](./LICENSE)

![License Info](https://img.shields.io/github/license/Lateralus138/HyperCLIW?style=for-the-badge)

>This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

>This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
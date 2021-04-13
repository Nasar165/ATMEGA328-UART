![MCS Unity logo](https://github.com/MCS-Unity/mcs-backend/blob/master/resources/mcsunity_logo.png)
<br/><br/>

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://github.com/MCS-Unity/Website/blob/master/LICENSE)
![Build](https://github.com/mcs-unity/ocpp/workflows/Build/badge.svg)

## Introduction

### Getting started

These instructions are aimed at helping you set up the project for development or testing purposes.
If you wish to put the project in production, please check our [Deployment section](#deployment).

NOTE 

## MISRA Compliance

This library is not fully compliant with MISRA there are section that will require adjustments.
Please use the MISRA compliance checker in MPLAB X to view the current issues.

### Prerequisites

The following tools are required for the library to compile successfully please make sure that necessary tools
are installed and if not, install them utilizing the provider's main pages.

- [MPLAB X IDE v5.45]()
- [XC8 C Compiler]()

### Installing

This sections explains how to install necessary components to run the Node.js in a development
environment. Each section will explain how to install necessary components to begin debugging and
running the application.


### Deployment

This section explain how to import the necessary files over to your Atmega238p Project in  MPLAB X 
project. This section presumes that you've already created a project using Atmgea328p as your 
micro controller the library supports both real device and Simulator.

```
1. Open your MPLAB X project.
2. Copy the usart.h file in to the headers folder.
3. Copy the usart.c file to the source folder.
```

PS: There are better ways to import the project into your project but i've been unable to make it 
work for the moment.

### How to use the USART

### Custom Config

### Built With

API was built with the following tools in a Windows Environment.

- [Visual Studio Code](https://code.visualstudio.com/) - Code Editor
- [Fedora 32]() - Fedora 32
- [MPLAB X]() - MPLAB X IDE v5.45
- [XC8 C Compiler]() - XC8 C Compiler for AVR microcontroller
- [Atmel ICE]() - ATMEL ICE Programmer

### Contributing

### Versioning

We use [SemVer](http://semver.org/) for versioning. Please visit their website for more
information to understand how different versions might affect you and your project.

### Authors

- **Nasar Eddaoui** - _Initial work_ - [Nasar Eddaoui](https://github.com/Nasar165)

See also the list of [contributors](https://github.com/nasar176/ATMEGA-UART/graphs/contributors) 
who participated in this project.

### License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details

### Acknowledgments
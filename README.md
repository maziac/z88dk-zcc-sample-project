# Sample project for ZXSpectrum Next using Z88dk in VS Code
This is a slightly modified copy of the [vscode-z88dk-next-sample-project](https://github.com/vmorilla/vscode-z88dk-next-sample-project) repo by [vmorilla](https://github.com/vmorilla).
Main difference is that it does not use a Makefile, so it might be a little easier to setup especially in Windows.

This sample project can run under macos, Linux and Windows.

As a prerequisite you need to have a recent working installation of z88dk.
You can get it [here](https://github.com/z88dk/z88dk), under [releases](https://github.com/z88dk/z88dk/releases) you find some binaries.
Installation instructions are here: [z88dk installation](https://github.com/z88dk/z88dk/wiki/installation).

When everything is installed you should be able to run `zcc` from the commandline, e.g.:
~~~
$ zcc
zcc - Frontend for the z88dk Cross-C Compiler - v22110-51889e5300-20231220

Usage: zcc +[target] {options} {files}
...
~~~

## Files explained
- [src](src): folder with source files. Object (.obj) and list (.lis) files are generated in this folder (but are excluded from version control in .gitignore).

- [build](build): output folder for the resulting .nex and accompanying .map and .lis file.

- [.vscode/launch.json](.vscode/launch.json): configuration of DeZog debugging options

- [.vscode/c_cpp_properties.json](.vscode/c_cpp_properties.json): configuration of the C extension in code for proper syntax checks

- [.vscode/tasks.json](.vscode/tasks.json): configuration of the build task (launching `zcc`) with a problem matcher adapted to the output of Z88dk

- [.vscode/settings](.vscode/settings): settings of the editor, included the automatic launch of the building process
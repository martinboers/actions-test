# actions-test

This project demonstrates how Github Actions can be used to:

- generate a new C++ project, targeting the PLCnext Runtime, from a PLCnext CLI project template, and
- build a C++ project that targets the PLCnext Runtime ...

... *without* installing the PLCnext Command Line Interface (CLI) or a PLCnext Software Development Kit (SDK) on your own development machine.

## Quick Start

- Open this github repository in a web browser (if you're not there already).
- Click the green "Use this template" button, and select "Create a new repository".
- Fill out the fields and click "Create repository from template".
- In the new repository, select "Actions" from the menu.
- Run the workflow named "Create ACF Project".

=> A new ACF project is automatically created using the `acfproject` PLCnext CLI project template, and the project source files are added to the repository.

- Run the workflow named "Build Project".

=> The project is built and the binaries are stored in an artifact named "binaries".

## Details

- The "Create ACF Project" workflow uses a public docker image that includes version 2022.6 of the PLCnext CLI.
- When the "Create ACF Project" workflow is run the first time, it deletes the .yaml file from the repository that defines that workflow, so the workflow effectively deletes itself. This prevents the same workflow from being run a second time in the same repository.
- The "Build Project" workflow uses a public docker image that includes the SDK for AXC F 2152 firmware version 2022.6.

The public docker images used in this example are only for demonstration and will not be maintained or developed. If you intend to use this example in your own project(s), you should use stable docker images that suit your own application.

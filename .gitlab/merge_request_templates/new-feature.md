# New feature implementation

*This template is provided to help you formulate your tickets quickly
and efficiently without redundency between issues and merge requests.
Feel free to adapt it to your needs and add or remove sections.*

Please, describe what your work brings (new model, improvement of an
 existing feature, ...) and how to use it.

Closes `#<new_feature_request_issue_id>`

## Main modifications

Description of the feature implementation:

  - New files
  - New class / methods
  - Algorithm steps:
    1. ...
    2. ...

### Side effects for other users
If applicable, try to list side effects or breaking changes that will
be introduced by the merge of this feature:

  - [ ] Input files modification
  - [ ] Output files modification (non regression tests expected to fail)
  - [ ] Log modification (stdout / stderr, ...)
  - [ ] Other breaking change (an existing functionality will no longer work as expected)...
  - ...

## Validation

Please, expain how your implementation has been validated.

For example, include a test case description:
  - mesh generation command line if relevant
  - test case name or input files
  - ecogen command line: e.g. `mpirun -n 4 ./ECOGEN`
  - results: output files, logs, screenshots...

## Additional informations
 - [ ] Non regression tests failure is expected

## Checklist:

  - [ ] The commit message follows [the project guidelines](https://sephiroth.viewdns.net/code-mphi/ecogen/-/wikis/How-to-contribute-to-ECOGEN#commit-message) (`branch_name: short message`)
  - [ ] My **new** code follows [the code style guidelines](https://sephiroth.viewdns.net/code-mphi/ecogen/-/wikis/How-to-contribute-to-ECOGEN#code-style-guidelines) of this project (no trailing whitespaces, no tabulations, 2 spaces indentations, last line ended by a line feed character).
  - [ ] A test highlighting the bug has been added (ideally, this test is added before any fixing commit and it fails, the bug resolution will allow the test to pass)
  - [ ] If needed, other tests have been added to cover additional changes and to prove that my feature words
  - [ ] I have commented my code, particularly in hard-to-understand areas
  - [ ] I have made corresponding changes to the documentation
  - [ ] My changes generate no new warnings
  - [ ] I run locally the non regression tests
  - [ ] I have added the needed labels to my MR and the associated bug

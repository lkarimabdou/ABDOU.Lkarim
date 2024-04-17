## Welcome to the Unit Testing Workshop with Criterion!

Hello everyone, this README will guide you through the essentials and practical applications of unit testing using the Criterion library. 

### Today's Agenda:

- **Introduction**: Brief overview and the significance of unit testing.
- **Understanding Testing Types**: We'll start by covering some definitions :
    - unit tests
    - automated tests
    - system tests
    - functional tests, 
    - continuous integration and deployment, 
    - TDD (Test-Driven Development)
- **Prerequisites Check**:
  - Ensure tools like `gcovr` and `Criterion` are installed.
- **Session Breakdown**:
  1. **Create a Makefile**: We'll start by constructing a Makefile tailored for unit testing.
  2. **Primary Function Tests**: Develop unit tests for the primary functions of your application.
  3. **Secondary Function Tests**: Focus on intermediary functions and their testing nuances.
  4. **Main Function Tests**: Tackle unit tests for the top-level functions, crucial for your application's core functionality.
  5. **System and Functional Testing**: Round off by applying system and functional tests to assess the overall program.

By the end of this workshop, you'll have a solid foundation in utilizing Criterion for your testing needs, and a hands-on experience in structuring and writing different types of tests. Let's begin our journey into making more reliable and robust software!

Here are concise definitions of each testing concept:

- **Automated Testing:** Utilizes software tools to automatically execute tests on code, checking its functionality, performance, and security without human intervention.

- **Unit Testing:** Tests individual components of software to verify each part functions as intended. These tests are usually developed by software engineers to confirm code meets specifications.

- **Integration Testing:** Assesses the interaction between integrated units of a software application to identify interface defects. It follows unit testing and precedes system testing.

- **Functional Testing:** A black-box testing method that derives test cases from software specifications to ensure the output matches expected outcomes, ignoring internal workings.

- **System Testing:** Evaluates a complete and integrated software system to ensure it fulfills specified requirements, testing the application as a whole.

- **Line Coverage:** Indicates the percentage of executable lines of code tested, identifying untested parts of the program.

- **Branch Coverage:** Ensures all possible code branches from decision points are executed during testing, providing a thorough scenario assessment.

- **Function Coverage:** Measures the percentage of functions or methods invoked in testing, ensuring all functions are tested at least once.

- **TDD (Test-Driven Development):** A development methodology where specific requirements are converted into test cases, which guide software improvements to ensure the tests pass, promoting simple design and reliability.

## Step 1: Create a Makefile

Create a `Makefile` to compile the unit tests, ensuring that the main is not included as Criterion handles the main function for testing.

### Makefile Contents

```makefile
... [Previous rules] ...
tests_run: #Must compile the tests without the main and the criterion libraries
tests_clean: #Must remove all generated files and the binary file
tests_re: #Should clean and then recompile the tests

.PHONY: # Don't forget to add your new rules to the .PHONY list
```

Ensure that you exclude the main source file that contains the `main()` function if present in the `src/` directory.

## Step 2: Primary Function Tests

Create the redirect function in `tests/redirect.c` file to redirect the standard output and standard error streams. This function is used to capture the output of the functions being tested.

Create tests for the following primary functions:

### Test Files

- `strlen` in `tests/tests_strlen.c`
- `my_free` in `tests/tests_my_free.c`
- `my_array_len` in `tests/tests_my_array_len.c`
- `is_token` in `tests/tests_is_token.c`

## Step 3: Secondary Function Tests

Create tests for the following secondary functions:

### Test Files

- `freen_array` in `tests/tests_freen_array.c`
- `my_strlen_sepa` in `tests/tests_my_strlen_sepa.c`
- `str_is_token` in `tests/tests_str_is_token.c`
- `my_strndup` in `tests/tests_my_strndup.c`

## Step 4: Main Function Tests

Create tests for the following functions related to the main functionality of the program:

### Test Files

- `my_count_words` in `tests/tests_my_count_words.c`
- `my_str_to_word_array` in `tests/tests_my_str_to_word_array.c`

## Step 5: System and Functional Testing

System and functional tests for the main part of the program:

### Test Files

- `programm_main` in `tests/tests_programm_main.c`

**Note:** Always review and modify the test files and Makefile as necessary to fit the specific structure and requirements of your project, such as including the right paths to header files and handling dependencies.

### Functions and Lines Explanation

**Function: redirect**
```c
void redirect(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
```
**Description**: This function redirects the standard output (stdout) and standard error (stderr) streams. It's commonly used in testing environments to capture and analyze console outputs programmatically.

**Test Definition**
```c
Test(strlen, tests_strlen, init=redirect, .timeout=1)
```
**Description**: This defines a test case named `tests_strlen` for testing the `strlen` function. It uses `redirect` as an initialization function to set up the test environment and specifies a timeout of 1 second, meaning the test will fail if it takes longer than this to complete.

### Criterion Assertion Methods

| Method                     | Parameters                       | Description                                              |
|----------------------------|----------------------------------|----------------------------------------------------------|
| `cr_assert_null`           | `pointer`                        | Asserts that a pointer is NULL.                          |
| `cr_assert_not_null`       | `pointer`                        | Asserts that a pointer is not NULL.                      |
| `cr_assert_eq`             | `actual`, `expected`             | Asserts that two values are equal.                       |
| `cr_assert_neq`            | `actual`, `expected`             | Asserts that two values are not equal.                   |
| `cr_assert_str_eq`         | `actual_str`, `expected_str`     | Asserts that two strings are equal.                      |
| `cr_assert_str_empty`      | `str`                            | Asserts that a string is empty.                          |
| `cr_assert_stdout_eq_str`  | `expected_str`                   | Asserts that the captured stdout matches an expected string. |
| `cr_assert_stderr_neq_str` | `unexpected_str`                 | Asserts that the captured stderr does not match an unexpected string. |
| `cr_assert_file_contents_eq` | `filename`, `expected_contents` | Asserts that the contents of a file match the expected contents. |

### Additional Resources

- [Criterion Documentation](https://criterion.readthedocs.io/en/master/)

- [Epitech Criterion Documentation](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/criterion.html)

- [Epitech Criterion assert list](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/criterion.html#asserts)

- [Epitech Criterion Makefile creation guide](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/makefiles.html)

- [Definition TDD & its 3 laws Wikipedia](https://fr.wikipedia.org/wiki/Test_driven_development)

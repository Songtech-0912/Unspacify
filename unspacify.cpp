// Begin program
#include <regex>

#include <string.h>

#include <iostream>

using namespace std;

// Driver Code
int main(int argc, char ** argv) {
  // Regex for finding spaces
  regex regexp("[\\s-]+");

  // Program should have 1 argument when run correctly
  if (argc == 2) {
    string result = regex_replace(argv[1], regexp, "-");
    cout << "Unspacified!" << endl << "\t Result: " << result << endl;

  } else if (argc > 2) {
    for (int i = 1; i < argc; i++) {
      if (string(argv[i]) == "-m") {
        // if (i < argc) { // Make sure we aren't at the end of argv!
          string result = regex_replace(argv[i + 1], regexp, "-"); // Increment 'i' so we don't get the argument as the next argv[i].
          cout << result << endl;
        // } else { // Catch error if user doesn't give a valid argument
        //   cerr << "-m option requires one argument." << endl;
        //   return 1;
        // }
      }
    }
  } else /* If program is called incorrectly */ {
    /* print usage */
    cout << "Usage: " << endl << "\t" << argv[0] << " \"your-string\"" << endl;

    cout << "Arguments: " << endl << "\t" << argv[0] << "-m \"your-string\": Only print result, with no formatting" << endl;
  }
  return 0;
}

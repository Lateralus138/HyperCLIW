
#include <iostream>
#include <Windows.h>
#include <vector>
#include "Functions.h"

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;
using std::to_string;
using std::vector;

int main(int argc, const char* argv[])
{
  SetConsoleTitle("HyperCLI Wrapper");

  vector<string> argvcopy;
  if (argc > 1) argvcopy.assign(argv + 1, argv + argc);
  else return 1;

  DWORD l_mode;
  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleMode(hStdout, &l_mode);
  SetConsoleMode(hStdout, l_mode |
    ENABLE_VIRTUAL_TERMINAL_PROCESSING |
    DISABLE_NEWLINE_AUTO_RETURN);

  const string LOCALAPPDATA = GetEnvString("LOCALAPPDATA");
  if (LOCALAPPDATA.empty()) return 2;
  const string HYPERCMDSTR = LOCALAPPDATA + "\\hyper\\app-3.0.2\\resources\\bin\\hyper.cmd";
  if (!FileExist(HYPERCMDSTR))
  {
    cout
      << esc("31")
      << HYPERCMDSTR
      << esc("0")
      << " not found."
      << endl;
    return 3;
  }
  string argstring = VecToString(argvcopy);
  string command = HYPERCMDSTR + ' ' + argstring;
  return system(command.c_str()) / 256;
}

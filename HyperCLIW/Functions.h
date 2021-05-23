#pragma once
#include <iostream>
#include <string>
bool FileExist (const std::string filestr)
{
  FILE* fileptr;
  if (fopen_s(&fileptr, filestr.c_str(), "r"))
  {
    if (fileptr < 0)
    {
      fclose(fileptr);
    }
    return 0;
  }
  return 1;
}
std::string esc (const std::string esc, bool close = true)
{
  auto str = "\x1b[" + esc;
  if (close) str.push_back('m');
  return str;
}
void DebugPause (std::string init = "")
{
  std::cout << init.c_str() << std::flush;
  std::cout
    << "Press ["
    << esc("7;92") << " Enter " << esc("0")
    << "] to "
    << esc("92") << "Continue" << esc("0")
    << " or ["
    << esc("7;91") << " Ctrl+C " << esc("0")
    << "] to "
    << esc("91") << "Cancel" << esc("0")
    << "..."
    << std::endl;
  std::cin.ignore(1, '\n');
}
std::string GetEnvString (std::string envstr)
{
  char* envvar;
  size_t reqSz;
  getenv_s(&reqSz, NULL, 0, envstr.c_str());
  if (reqSz == 0) return "";
  envvar = (char*)malloc(reqSz * sizeof(char));
  if (!envvar) return "";
  getenv_s(&reqSz, envvar, reqSz, envstr.c_str());
  return envvar;
}
void SetConsoleTitle (std::string title)
{
  std::cout << "\x1b]0" << title << "\007" << std::flush;
}
std::string GetUIString (std::string verbose_string)
{
  std::string result;
  if (!verbose_string.empty()) std::cout << verbose_string;
  getline(std::cin, result, '\n');
  return result;
}
std::string GetUIStringT (std::string verbose_string, std::string console_title, std::string return_title = "")
{
  std::cout << "\x1b]0;" << console_title << "\007";
  std::string result;
  if (!verbose_string.empty()) std::cout << verbose_string;
  getline(std::cin, result, '\n');
  std::cout << "\x1b]0;" << return_title << "\007";
  return result;
}
std::string VecToString(std::vector<std::string> vec, char delim = ' ')
{
  std::string convert;
  auto index = 0;
  for (auto item : vec)
  {
    if (index > 0) convert.push_back(delim);
    convert.append(item);
    index++;
  }
  return convert;
}
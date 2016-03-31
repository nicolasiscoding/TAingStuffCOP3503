#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int main (int args, char * argv[])
{

  if(args != 2)
  {
      std::cout << "invalid amount of arguments"  << std::endl;
      return -1;
  }

  ifstream myfile (argv[1]);

  if (!myfile)
  {
    std::cout << "You didnt pass me anything! Check your file path!!!" << std::endl;
    return -1; // error: bail out
  }

  string line;
  std::vector<std::string> v;

  while ( getline (myfile,line) ) {
    // cout << line << '\n';

    v.push_back(line);
  }

  myfile.close();

  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}

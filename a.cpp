#include <sys/stat.h>
#include <unistd.h>
#include <iostream>

int main()
{
  using namespace std;
  struct stat buf;
  if (stat("a.out", &buf) < 0) {
    cerr << "stat failed" << '\n';
    return 1;
  }
  cout << "buf.st_nlink = " << buf.st_nlink << '\n';
  if (link("a.out", "b.out") < 0) {
    cerr << "link failed" << '\n';
    return 1;
  }
  return 0;
}

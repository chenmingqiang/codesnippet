#include <boost/lexical_cast.hpp>

using namespace std;

int main(int argc, char *argv[])
{
  int x  = boost::lexical_cast<int>("123"); 
  long y = boost::lexical_cast<long>("123456");
  float f = boost:lexical_cast<float>("123.456");
  double d = boost:lexical_cast<double>("123.456");

  string s1 = boost::lexical_cast<string>(1234);
  string s2 = boost::lexical_cast<string>(1234.0);
  string s3 = boost::lexical_cast<string>(0x10);
  bool   b = boost::lexical_cast<bool>("1");

  return 0;
}

#include <yurai/statichook.h>
#include <string>

THook(std::string, _ZN4Test4testEv) {
  return "test";
}

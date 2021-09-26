#include "xorstr.hpp"

#include <iostream>

using namespace std;

constexpr auto* g_normal_str{"Javascript? Website development? Games? Blah!"};
constexpr auto g_obfuscated_str{xorstr("We are driver developers!")}; // String length is 25; xorstr may be non-null-terminated

int main() {
  cout << "Normal: " << g_normal_str << '\n';
  cout << "Obfuscated: " << string_view{g_obfuscated_str.get(), 25} << '\n';

  auto deobfuscated_str{g_obfuscated_str};
  cout << "Deobfuscated: " << deobfuscated_str.crypt_get() << '\n';

  return 0;
}
/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'8,29' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 3 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.nfc.NfcTagProxy.h"
#include "ti.nfc.tech.TagTechnologyNfcFProxy.h"
#include "ti.nfc.tech.TagTechnologyNdefFormatableProxy.h"
#include "ti.nfc.records.NdefRecordSmartPosterProxy.h"
#include "ti.nfc.tech.TagTechnologyNfcAProxy.h"
#include "ti.nfc.records.NdefRecordMediaProxy.h"
#include "ti.nfc.NfcModule.h"
#include "ti.nfc.records.NdefRecordExternalProxy.h"
#include "ti.nfc.records.NdefRecordUnknownProxy.h"
#include "ti.nfc.tech.TagTechnologyMifareClassicProxy.h"
#include "ti.nfc.NfcForegroundDispatchFilter.h"
#include "ti.nfc.records.NdefRecordUriProxy.h"
#include "ti.nfc.records.NdefRecordTextProxy.h"
#include "ti.nfc.NfcAdapterProxy.h"
#include "ti.nfc.NdefMessageProxy.h"
#include "ti.nfc.records.NdefRecordProxy.h"
#include "ti.nfc.tech.TagTechnologyIsoDepProxy.h"
#include "ti.nfc.records.NdefRecordApplicationProxy.h"
#include "ti.nfc.tech.TagTechnologyProxy.h"
#include "ti.nfc.tech.TagTechnologyNdefProxy.h"
#include "ti.nfc.tech.TagTechnologyMifareUltralightProxy.h"
#include "ti.nfc.tech.TagTechnologyNfcBProxy.h"
#include "ti.nfc.records.NdefRecordEmptyProxy.h"
#include "ti.nfc.tech.TagTechnologyNfcVProxy.h"


#line 36 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 54, duplicates = 0 */

class NfcBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline unsigned int
NfcBindings::hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70,  3, 30, 70, 15, 70,
      25, 70, 70, 70, 70, 70, 70, 70,  0, 70,
       0, 70, 70, 70, 70, 70, 10, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70,  0, 70, 70,
      70,  0,  5, 70, 70, 10, 70, 70,  5, 70,
       0, 70, 70, 70,  0, 70,  5, 70, 70, 70,
       0, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70, 70, 70, 70, 70,
      70, 70, 70, 70, 70, 70
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[28]];
      /*FALLTHROUGH*/
      case 28:
      case 27:
      case 26:
      case 25:
      case 24:
      case 23:
      case 22:
      case 21:
      case 20:
      case 19:
      case 18:
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
        break;
    }
  return hval;
}

struct titanium::bindings::BindEntry *
NfcBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 24,
      MIN_WORD_LENGTH = 16,
      MAX_WORD_LENGTH = 46,
      MIN_HASH_VALUE = 16,
      MAX_HASH_VALUE = 69
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 44 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.NfcModule", ::ti::nfc::NfcModule::bindProxy, ::ti::nfc::NfcModule::dispose},
      {""},
#line 38 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.NfcTagProxy", ::ti::nfc::NfcTagProxy::bindProxy, ::ti::nfc::NfcTagProxy::dispose},
      {""}, {""}, {""},
#line 51 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.NfcAdapterProxy", ::ti::nfc::nfc::NfcAdapterProxy::bindProxy, ::ti::nfc::nfc::NfcAdapterProxy::dispose},
#line 52 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.NdefMessageProxy", ::ti::nfc::nfc::NdefMessageProxy::bindProxy, ::ti::nfc::nfc::NdefMessageProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 53 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordProxy", ::ti::nfc::NdefRecordProxy::bindProxy, ::ti::nfc::NdefRecordProxy::dispose},
      {""}, {""},
#line 49 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordUriProxy", ::ti::nfc::nfc::NdefRecordUriProxy::bindProxy, ::ti::nfc::nfc::NdefRecordUriProxy::dispose},
      {""},
#line 56 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyProxy", ::ti::nfc::TagTechnologyProxy::bindProxy, ::ti::nfc::TagTechnologyProxy::dispose},
      {""},
#line 46 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordUnknownProxy", ::ti::nfc::NdefRecordUnknownProxy::bindProxy, ::ti::nfc::NdefRecordUnknownProxy::dispose},
#line 45 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordExternalProxy", ::ti::nfc::nfc::NdefRecordExternalProxy::bindProxy, ::ti::nfc::nfc::NdefRecordExternalProxy::dispose},
#line 50 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordTextProxy", ::ti::nfc::nfc::NdefRecordTextProxy::bindProxy, ::ti::nfc::nfc::NdefRecordTextProxy::dispose},
#line 60 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordEmptyProxy", ::ti::nfc::nfc::NdefRecordEmptyProxy::bindProxy, ::ti::nfc::nfc::NdefRecordEmptyProxy::dispose},
#line 41 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordSmartPosterProxy", ::ti::nfc::nfc::NdefRecordSmartPosterProxy::bindProxy, ::ti::nfc::nfc::NdefRecordSmartPosterProxy::dispose},
#line 42 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNfcAProxy", ::ti::nfc::nfc::TagTechnologyNfcAProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNfcAProxy::dispose},
      {""},
#line 57 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNdefProxy", ::ti::nfc::nfc::TagTechnologyNdefProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNdefProxy::dispose},
#line 43 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordMediaProxy", ::ti::nfc::nfc::NdefRecordMediaProxy::bindProxy, ::ti::nfc::nfc::NdefRecordMediaProxy::dispose},
#line 55 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.records.NdefRecordApplicationProxy", ::ti::nfc::nfc::NdefRecordApplicationProxy::bindProxy, ::ti::nfc::nfc::NdefRecordApplicationProxy::dispose},
      {""},
#line 47 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyMifareClassicProxy", ::ti::nfc::nfc::TagTechnologyMifareClassicProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyMifareClassicProxy::dispose},
#line 61 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNfcVProxy", ::ti::nfc::nfc::TagTechnologyNfcVProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNfcVProxy::dispose},
      {""},
#line 58 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyMifareUltralightProxy", ::ti::nfc::nfc::TagTechnologyMifareUltralightProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyMifareUltralightProxy::dispose},
      {""}, {""},
#line 40 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNdefFormatableProxy", ::ti::nfc::nfc::TagTechnologyNdefFormatableProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNdefFormatableProxy::dispose},
      {""},
#line 54 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyIsoDepProxy", ::ti::nfc::nfc::TagTechnologyIsoDepProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyIsoDepProxy::dispose},
      {""}, {""},
#line 48 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.NfcForegroundDispatchFilter", ::ti::nfc::nfc::NfcForegroundDispatchFilter::bindProxy, ::ti::nfc::nfc::NfcForegroundDispatchFilter::dispose},
      {""}, {""}, {""}, {""},
#line 39 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNfcFProxy", ::ti::nfc::nfc::TagTechnologyNfcFProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNfcFProxy::dispose},
      {""}, {""}, {""}, {""},
#line 59 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"
      {"ti.nfc.tech.TagTechnologyNfcBProxy", ::ti::nfc::nfc::TagTechnologyNfcBProxy::bindProxy, ::ti::nfc::nfc::TagTechnologyNfcBProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 62 "/private/var/folders/7n/l6vc139d0c7bswg8b84j45s80000gn/T/astjohn/nfc-generated/KrollGeneratedBindings.gperf"


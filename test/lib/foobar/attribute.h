#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H


#ifndef FOOBAR_EXPORT
#   if defined _WIN32 || defined __CYGWIN__ || defined _MSC_VER
#       define FOOBAR_EXPORT __declspec(dllexport)
#       define FOOBAR_IMPORT __declspec(dllimport)
#       define FOOBAR_LOCAL
#   elif defined __GNUC__ && __GNUC__ >= 4
#       define FOOBAR_EXPORT __attribute__((visibility("default")))
#       define FOOBAR_IMPORT __attribute__((visibility("default")))
#       define FOOBAR_LOCAL __attribute__((visibility("hidden")))
#   else /* Unsupported compiler */
#       define FOOBAR_EXPORT
#       define FOOBAR_IMPORT
#       define FOOBAR_LOCAL
#   endif
#endif


#ifndef FOOBAR_API
#   if defined FOOBAR_API_EXPORT
#       define FOOBAR_API FOOBAR_EXPORT
#   elif defined FOOBAR_API_IMPORT
#       define FOOBAR_API FOOBAR_IMPORT
#   else /* No API */
#       define FOOBAR_API
#   endif
#endif


#endif // ATTRIBUTE_H

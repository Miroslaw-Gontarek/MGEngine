#ifndef MGEngine_Engine
#define MGEngine_Engine

#ifdef MGEngine_Export
   #define MGE_DllExport   __declspec( dllexport )
#else
   #define MGE_DllExport   __declspec( dllimport )
#endif

namespace MGEngine
{
   class MGE_DllExport Engine
   {
   public:
      Engine() {};
   };
}

#endif
#ifndef MGResourceManager_Resource
#define MGResourceManager_Resource

#ifdef MGResourceManager_Export
#define MGRM_DllExport   __declspec( dllexport )
#else
#define MGRM_DllExport   __declspec( dllimport )
#endif

namespace MGResourceManager
{
   class MGRM_DllExport Resource
   {
   public:
      virtual void Load()=0;
      virtual void Unload()=0;
      virtual bool IsValid() const=0;

   };

   using ResourcePtr = Resource*;
}

#endif
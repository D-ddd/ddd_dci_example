#ifndef H84CEB6A8_6AA0_4BE4_AFAE_6C5518270D43
#define H84CEB6A8_6AA0_4BE4_AFAE_6C5518270D43

#include "base/interface_def.h"
#include "base/Role.h"

namespace dci {

UNKNOWN_INTERFACE(Unknown, 0xFFFFFFFE)
{
    virtual void* castTo(const InterfaceId iid) const = 0;
};

template <typename TO>
TO* unknown_cast(const Unknown* from)
{
    return from == 0 ? 0 : (TO*)from->castTo(TO::E_IID);
}

}

//////////////////////////////////////////////////////////////////////////
#define BEGIN_INTERFACE_TABLE() \
    virtual void* castTo(const InterfaceId iid) const \
    { switch(iid) {

#define END_INTERFACE_TABLE() \
    case 0xFFFFFFFF:          \
    default: return 0; }}


//////////////////////////////////////////////////////////////////////////
#define BEGIN_OVERRIDE_INTERFACE_TABLE(super)   \
    OVERRIDE(void* castTo(const InterfaceId iid) const)  \
    {                                           \
        void* t = super::castTo(iid);           \
        if (t != 0) return t;                   \
        switch(iid) {

#define BEGIN_OVERRIDE_INTERFACE_TABLE_2(super1, super2)   \
    OVERRIDE(void* castTo(const InterfaceId iid) const)   \
    {                                           \
        void* t = super1::castTo(iid);          \
        if (t != 0) return t;                   \
        t = super2::castTo(iid);                \
        if (t != 0) return t;                   \
        switch(iid) {

#define BEGIN_OVERRIDE_INTERFACE_TABLE_3(super1, super2, super3)   \
    OVERRIDE(void* castTo(const InterfaceId iid) const)            \
    {                                           \
        void* t = super1::castTo(iid);          \
        if (t != 0) return t;                   \
        t = super2::castTo(iid);                \
        if (t != 0) return t;                   \
        t = super3::castTo(iid);                \
        if (t != 0) return t;                   \
        switch(iid) {

#define END_OVERRIDE_INTERFACE_TABLE(super) END_INTERFACE_TABLE()

#define __HAS_INTERFACE(iface) \
    case iface::E_IID: \
      return const_cast<iface*>(static_cast<const iface*>(this));

#define __HAS_INTERFACE_CONTEXT(iface) \
    case iface::E_IID: \
      return const_cast<iface*>(static_cast<const iface*>(&getContext()));
#define APPEND_INTERFACE_TABLE(parent)        \
    OVERRIDE(void* castTo(const InterfaceId iid) const) \
    { void* p = parent::castTo(iid);          \
      if(p != 0) return p;                    \
      switch(iid) {

//////////////////////////////////////////////////////////////////////////
#define DECL_CONTEXT()                             \
    private:                                       \
        const dci::Unknown* context;                    \
    public:                                        \
    void setUserContext(const dci::Unknown* context)    \
    {                                              \
        this->context = context;                   \
    }                                              \
    const dci::Unknown* getUserContext() const          \
    {                                              \
        return context;                            \
    }

#define IMPL_OBJ_CONTEXT_ROLE_PTR(object, role)                 \
    DECL_OBJECT_CONTEXT_ROLE(object, role)                      \
{                                                               \
    return dci::unknown_cast<role>(context);                    \
}

#define DEF_SIMPLE_CONTEXT(context, super) \
struct context : dci::Unknown, protected super \
{ \
    BEGIN_OVERRIDE_INTERFACE_TABLE(super) \
    END_INTERFACE_TABLE() \
}


#endif /* H84CEB6A8_6AA0_4BE4_AFAE_6C5518270D43 */

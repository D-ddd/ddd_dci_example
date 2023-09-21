#ifndef HB9FA839D_9CAC_41F9_AD2A_4D9E51B29EA8
#define HB9FA839D_9CAC_41F9_AD2A_4D9E51B29EA8

/////////////////////////////////////////////////////////////////////
namespace details
{
    struct Role
    {
        virtual ~Role() = default;
    };
}

/////////////////////////////////////////////////////////////////////
#define DEFINE_ROLE(type) struct type : ::details::Role

#define ROLE(role) get##role()
#define ROLE_PROTO_TYPE(role) role& ROLE(role) const
#define USE_ROLE(role) virtual ROLE_PROTO_TYPE(role) = 0
#define HAS_ROLE(role) USE_ROLE(role)

#define DECL_ROLE(role) ROLE_PROTO_TYPE(role)

/////////////////////////////////////////////////////////////////////
#define IMPL_ROLE(role)                                       \
ROLE_PROTO_TYPE(role)                                         \
{                                                             \
   return const_cast<role&>(static_cast<const role&>(*this)); \
}

/////////////////////////////////////////////////////////////////////
#define __ROLE_CAST_TO(role, obj) \
    return const_cast<role&>(static_cast<const role&>(obj))

//////////////////////////////////////////////////////////////////////////
#define IMPL_ROLE_WITH_OBJ(role, obj) \
    DECL_ROLE(role)  { __ROLE_CAST_TO(role, obj); }


/////////////////////////////////////////////////////////////////////
#define SELF(self, role) static_cast<role&>(self)
#define SELF_CONST(self, role) static_cast<const role&>(self)




#endif /* HB9FA839D_9CAC_41F9_AD2A_4D9E51B29EA8 */

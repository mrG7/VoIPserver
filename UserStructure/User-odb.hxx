// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef USER_ODB_HXX
#define USER_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "User.hxx"

#include <memory>
#include <cstddef>
#include <string>
#include <utility>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/no-op-cache-traits.hxx>
#include <odb/polymorphic-info.hxx>
#include <odb/result.hxx>
#include <odb/polymorphic-object-result.hxx>

#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

namespace odb
{
  // User
  //
  template <>
  struct class_traits< ::User >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::User >
  {
    public:
    typedef ::User object_type;
    typedef ::User* pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = true;

    typedef ::User root_type;
    typedef ::std::string discriminator_type;
    typedef polymorphic_map<object_type> map_type;
    typedef polymorphic_concrete_info<object_type> info_type;

    static const std::size_t depth = 1UL;

    typedef ::std::string id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    no_op_pointer_cache_traits<pointer_type>
    pointer_cache_traits;

    typedef
    no_op_reference_cache_traits<object_type>
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };
}

#include <odb/details/buffer.hxx>

#include <odb/mysql/version.hxx>
#include <odb/mysql/forward.hxx>
#include <odb/mysql/binding.hxx>
#include <odb/mysql/mysql-types.hxx>
#include <odb/mysql/query.hxx>

namespace odb
{
  // User
  //
  template <typename A>
  struct query_columns< ::User, id_mysql, A >
  {
    // uid
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    uid_type_;

    static const uid_type_ uid;

    // typeid_
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    typeid__type_;

    static const typeid__type_ typeid_;

    // uuid
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    uuid_type_;

    static const uuid_type_ uuid;
  };

  template <typename A>
  const typename query_columns< ::User, id_mysql, A >::uid_type_
  query_columns< ::User, id_mysql, A >::
  uid (A::table_name, "`uid`", 0);

  template <typename A>
  const typename query_columns< ::User, id_mysql, A >::typeid__type_
  query_columns< ::User, id_mysql, A >::
  typeid_ (A::table_name, "`typeid`", 0);

  template <typename A>
  const typename query_columns< ::User, id_mysql, A >::uuid_type_
  query_columns< ::User, id_mysql, A >::
  uuid (A::table_name, "`uuid`", 0);

  template <typename A>
  struct pointer_query_columns< ::User, id_mysql, A >:
    query_columns< ::User, id_mysql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::User, id_mysql >:
    public access::object_traits< ::User >
  {
    public:
    typedef polymorphic_entry<object_type, id_mysql> entry_type;
    typedef object_traits_impl<root_type, id_mysql> root_traits;

    struct discriminator_image_type
    {
      details::buffer discriminator_value;
      unsigned long discriminator_size;
      my_bool discriminator_null;

      std::size_t version;
    };

    struct id_image_type
    {
      details::buffer id_value;
      unsigned long id_size;
      my_bool id_null;

      std::size_t version;
    };

    static map_type* map;
    static const info_type info;

    struct image_type
    {
      // uid_
      //
      details::buffer uid_value;
      unsigned long uid_size;
      my_bool uid_null;

      // typeid_
      //
      details::buffer typeid_value;
      unsigned long typeid_size;
      my_bool typeid_null;

      // uuid
      //
      details::buffer uuid_value;
      unsigned long uuid_size;
      my_bool uuid_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static discriminator_type
    discriminator (const image_type&);

    static bool
    grow (image_type&,
          my_bool*);

    static void
    bind (MYSQL_BIND*,
          image_type&,
          mysql::statement_kind);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          mysql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef
    mysql::polymorphic_root_object_statements<object_type>
    statements_type;

    typedef statements_type root_statements_type;

    typedef mysql::query_base query_base_type;

    static const std::size_t column_count = 3UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 1UL;
    static const std::size_t managed_optimistic_column_count = 0UL;
    static const std::size_t discriminator_column_count = 1UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char find_discriminator_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&, bool top = true, bool dyn = true);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&, bool dyn = true);

    static bool
    reload (database&, object_type&, bool dyn = true);

    static void
    update (database&, const object_type&, bool top = true, bool dyn = true);

    static void
    erase (database&, const id_type&, bool top = true, bool dyn = true);

    static void
    erase (database&, const object_type&, bool top = true, bool dyn = true);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);

    static void
    discriminator_ (statements_type&,
                    const id_type&,
                    discriminator_type*);
  };

  template <>
  class access::object_traits_impl< ::User, id_common >:
    public access::object_traits_impl< ::User, id_mysql >
  {
  };

  // User
  //
}

#include "User-odb.ixx"

#include <odb/post.hxx>

#endif // USER_ODB_HXX

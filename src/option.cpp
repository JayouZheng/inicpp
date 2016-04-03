#include "option.h"

namespace inicpp
{
	option::option(const option &source)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(const option &source)
	{
		throw not_implemented_exception();
	}

	option::option(option &&source)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(option &&source)
	{
		throw not_implemented_exception();
	}

	option::option(const std::string &name, const std::string &value, option_type type)
	{
		throw not_implemented_exception();
	}

	const std::string &option::get_name() const
	{
		return name_;
	}
		
	void remove_from_list(size_t position)
	{
		throw not_implemented_exception();
	}

	void option::remove_from_list(size_t position)
	{
		throw not_implemented_exception();
	}

	bool option::validate(const option_schema &opt_schema, schema_mode mode)
	{
		throw not_implemented_exception();
	}

	std::ostream &option::operator<<(std::ostream &os)
	{
		throw not_implemented_exception();
	}

	bool option::is_list() const
	{
		return values_.size() > 1;
	}

	option &option::operator=(boolean_t arg)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(signed_t arg)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(unsigned_t arg)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(float_t arg)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(enum_t arg)
	{
		throw not_implemented_exception();
	}

	option &option::operator=(string_t arg)
	{
		throw not_implemented_exception();
	}
}

#include "option_schema.h"

namespace inicpp
{
	option_schema::option_schema(const option_schema &source)
	{
		throw not_implemented_exception();
	}

	option_schema &option_schema::operator=(const option_schema &source)
	{
		throw not_implemented_exception();
	}
	
	option_schema::option_schema(option_schema &&source)
	{
		throw not_implemented_exception();
	}
	
	option_schema &option_schema::operator=(option_schema &&source)
	{
		throw not_implemented_exception();
	}

	const std::string &option_schema::get_name() const
	{
		return params_->name;
	}

	option_type option_schema::get_type() const
	{
		return type_;
	}

	bool option_schema::is_list() const
	{
		return params_->type == option_item::list;
	}

	const std::string &option_schema::get_default_value() const
	{
		return params_->default_value;
	}

	bool option_schema::is_mandatory() const
	{
		return params_->requirement == item_requirement::mandatory;
	}

	const std::string &option_schema::get_comment() const
	{
		return params_->comment;
	}
	
	bool option_schema::validate_option(const option &opt, schema_mode mode) const
	{
		throw not_implemented_exception();
	}

	std::ostream &operator<<(std::ostream &os, const option_schema &opt_schema)
	{
		throw not_implemented_exception();
	}
}

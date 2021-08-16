#pragma once

namespace netlib::log
{
	enum class log_level : uint32_t
	{
		none = 0,
		info = 1,
		debug = 2,
		all = 3,
	};
}

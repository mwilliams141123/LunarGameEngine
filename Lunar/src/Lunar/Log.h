#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Lunar
{
	class LUNAR_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

#define LUNAR_CORE_ERROR(...)   :: Lunar::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LUNAR_CORE_WARN(...)    :: Lunar::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LUNAR_CORE_INFO(...)    :: Lunar::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LUNAR_CORE_TRACE(...)   :: Lunar::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LUNAR_CORE_FATEL(...)   :: Lunar::Log::GetCoreLogger()->fatel(__VA_ARGS__)

#define LUNAR_ERROR(...) :: Lunar::Log::GetClientLogger()->error(__VA_ARGS__)
#define LUNAR_WARN(...)  :: Lunar::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LUNAR_INFO(...)  :: Lunar::Log::GetClientLogger()->info(__VA_ARGS__)
#define LUNAR_TRACE(...) :: Lunar::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LUNAR_FATEL(...) :: Lunar::Log::GetClientLogger()->fatel(__VA_ARGS__)
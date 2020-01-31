workspace "testGit"
	configurations
	{
		"Debug",
		"Release"
	}

	platforms
	{
		"x86",
	}
	characterset ("MBCS")
	startproject "testGit"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "testGit"
	location "testGit"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	includedirs
	{
		"%{prj.name}/src",
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

	filter "configurations:Debug"
		symbols "On"
	
	filter "configurations:Release"
		optimize "On"
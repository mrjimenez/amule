if (NOT WIN32)
	find_package (PkgConfig REQUIRED)

	pkg_search_module (gdlib REQUIRED
		IMPORTED_TARGET GLOBAL
		gdlib
	)

	if (TARGET PkgConfig::gdlib)
		set_property (TARGET PkgConfig::gdlib PROPERTY
			INTERFACE_COMPILE_DEFINITIONS __GD__
		)
		message (STATUS "gdlib version: ${gdlib_VERSION} -- OK")
	else()
		# With REQUIRED, CMake will usually already have errored before here.
		# But keeping this makes the file robust if REQUIRED is removed later.
		message (FATAL_ERROR "libgd (gdlib) not found via pkg-config")
	endif()

endif()

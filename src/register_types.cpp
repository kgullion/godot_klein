#include "register_types.h"

#include <gdextension_interface.h>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

#include "k_direction.h"

using namespace godot;

void initialize_klein_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ClassDB::register_class<Kdirection>();
}

void uninitialize_klein_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	// Note: our class will be unregistered automatically
}

extern "C" {
    // Initialization.
    GDExtensionBool GDE_EXPORT klein_library_init(GDExtensionInterfaceGetProcAddress p_interface, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
        GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

        init_obj.register_initializer(initialize_klein_module);
        init_obj.register_terminator(uninitialize_klein_module);
        init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SERVERS);

        return init_obj.init();
    }
}
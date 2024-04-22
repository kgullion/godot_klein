#pragma once

#include <godot_cpp/classes/ref_counted.hpp>
#include <klein/klein.hpp>

namespace godot {

class Kdirection : public RefCounted {
	GDCLASS(Kdirection, RefCounted)

protected:
	static void _bind_methods();

private:
	kln::direction dir = kln::direction();

public:
	Kdirection() noexcept;
	Kdirection(float x, float y, float z) noexcept;
	// Kdirection(kln::direction dir) noexcept;


	~Kdirection();
    // [[nodiscard]] float x() const noexcept;
	// [[nodiscard]] float y() const noexcept;
	// [[nodiscard]] float z() const noexcept;

	// void normalize() noexcept;
	// Kdirection normalized() const noexcept;
};

}
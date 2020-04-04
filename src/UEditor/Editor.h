#pragma once

#include <UScene/core/core>

namespace Ubpa {
	class Editor {
	public:
		Read<Editor, SObj*> roamerobj;

		static Editor& Instance() noexcept {
			static Editor instance;
			return instance;
		}

		void SetCamera(SObj* cameraobj);
		void Update();

	private:
		Editor();
		Scene scene{ "Editor Scene" };
	};
}

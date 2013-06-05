#ifndef CHANGE_GUARD
#define CHANGE_GUARD 1

#include <llvm/DerivedTypes.h>
#include <llvm/Module.h>

namespace llvm {
	class Value;
}

using namespace llvm;
using namespace std;

typedef vector<Type*> Types;

class Change {
	public:
		Change(Types, Value*);
		~Change();
		
		Value* getValue();

		Types getType();

	private:
		Value* value;
		Types type;
};

#endif
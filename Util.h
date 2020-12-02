#ifndef UtilH
#define UtilH

template<typename T>
static inline bool instanceof(State* state) {
	return dynamic_cast<T*>(state) != nullptr;
}
#endif

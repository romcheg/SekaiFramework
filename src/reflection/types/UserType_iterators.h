friend struct method_iterator;

//////////////////////////////////////////////////////////////////////////

struct method_iterator
{
	friend class UserType;



private:
	method_iterator(UserType* type) { }
	UserType* pType;
	size_t offset;
};

//////////////////////////////////////////////////////////////////////////

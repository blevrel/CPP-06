#include "main.hpp"

int	main(void)
{
	Data		data;
	Data		*data_ptr1;
	Data		*data_ptr2;
	uintptr_t	serialized;

	data_ptr1 = &data;
	data.nb = 42.4242;
	data.c = 'z';
	data.str = "Hello world!";
	
	serialized = serialize(data_ptr1);
	data_ptr2 = deserialize(serialized);
	if (data_ptr1 == data_ptr2)
		std::cout << "ptr2 is equal to ptr1" << std::endl;
	else
		std::cout << "ptr2 is different from equal to ptr1" << std::endl;
	return (0);
}

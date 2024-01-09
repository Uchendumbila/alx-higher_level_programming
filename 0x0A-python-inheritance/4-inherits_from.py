#!/usr/bin/python3
def inherits_from(obj, a_class):

    """
    Check if the object is an instance of a class that inherited (directly or indirectly)
    from the specified class.

    :param obj: The object to check.
    :param a_class: The class to check for inheritance.
    :return: True if the object inherits from the specified class, otherwise False.
    """
    # Get the set of classes in the object's inheritance hierarchy
    obj_classes = {cls.__class__ for cls in type(obj).__mro__}
    
    # Check if the specified class is in the set
    return any(issubclass(cls, a_class) for cls in obj_classes)

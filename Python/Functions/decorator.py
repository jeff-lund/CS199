def document_it(func):
    def new_func(*args, **kwargs):
        print("Running function:", func.__name__)
        print("Positional arguments", args)
        print("Keyword arguments", kwargs)
        result = func(*args, **kwargs)
        print("Result:", result)
        return result
    return new_func

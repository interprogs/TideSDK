
function external_document()
{
	return $document->getElementById('a');
}

function test_window_global()
{
	return $window->my_global_foo('suck ass');
}

function test_document_title()
{
  return $document->title;
}

// tests for conversion from JS into PHP
function test_js_type_string($t)
{
	return is_string($t);
}

function test_js_type_int($t)
{
	return is_int($t);
}

function test_js_type_function($t)
{
	return is_callable($t);
}

function test_js_type_float($t)
{
	return is_float($t);
}

function test_js_type_list($t)
{
	return is_array($t);
}

function test_js_type_object($t,$c)
{
	return is_object($t) && get_class($t) == $c;
}

function test_js_klist_elements($t)
{
	return $t[0] == 1 && $t[1] == 2 && $t[2] == 3;
}

function test_js_type_dict($t)
{
	return is_array($t);
}

function test_js_type_true_bool($t)
{
	return $t == true;
}

function test_js_type_false_bool($t)
{
	return $t == false;
}

function test_js_type_null($t)
{
	return $t == null;
}

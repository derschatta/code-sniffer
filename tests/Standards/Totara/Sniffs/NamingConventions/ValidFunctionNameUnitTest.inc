<?php

abstract class my_class {

    public function __construct() {}
    public function My_Class() {}
    public function _My_Class() {}

    public function getSomeValue() {}
    public function parseMyDSN() {}
    public function get_some_value() {}
    public function GetSomeValue() {}
    public function getSomeValue_Again() {}

    protected function getSomeValue() {}
    protected function parseMyDSN() {}
    protected function get_some_value() {}

    private function _getSomeValue() {}
    private function parseMyDSN() {}
    private function _get_some_value() {}

    function getSomeValue() {}
    function parseMyDSN() {}
    function get_some_value() {}

}//end class

function getSomeValue() {}
function parseMyDSN() {}
function get_some_value() {}
function _get_some_value() {}


/* Test for magic functions */

class magic_test {
    function __construct() {}
    function __destruct() {}
    function __call($name, $args) {}
    static function __callStatic($name, $args) {}
    function __get($name) {}
    function __set($name, $value) {}
    function __isset($name) {}
    function __unset($name) {}
    function __sleep() {}
    function __wakeup() {}
    function __toString() {}
    function __set_state() {}
    function __clone() {}
    function __autoload() {}
    function __invoke() {}
    function __myFunction() {}
    function __my_function() {}

}

function __construct() {}
function __destruct() {}
function __call() {}
function __callStatic() {}
function __get() {}
function __set() {}
function __isset() {}
function __unset() {}
function __sleep() {}
function __wakeup() {}
function __toString() {}
function __set_state() {}
function __clone() {}
function __autoload($class) {}
function __invoke() {}
function __myFunction() {}
function __my_function() {}


class closure_test {
    function test() {
        $foo = function() { echo 'foo'; };
    }
}

function test() {
    $foo = function() { echo 'foo'; };
}

class my_class {
    public function __construct() {}
}

trait foo
{
    function __call($name, $args) {}
}

class magic_case_test {
    function __Construct() {}
    function __isSet($name) {}
    function __tostring() {}
}
function __autoLoad($class) {}

class foo extends \SoapClient
{
    public function __soapCall(
        $functionName,
        $arguments,
        $options = array(),
        $inputHeaders = null,
        &$outputHeaders = array()
    ) {
        // body
    }
}

function __debugInfo() {}
class foo {
    function __debugInfo() {}
}

function ___tripleUnderscore() {} // Ok.

class triple {
    public function ___tripleUnderscore() {} // Ok.
}

/* Magic methods in anonymous classes. */
$a = new class {
    function __construct() {}
    function __destruct() {}
    function __call($name, $args) {}
    static function __callStatic($name, $args) {}
    function __get($name) {}
    function __set($name, $value) {}
    function __isset($name) {}
    function __unset($name) {}
    function __sleep() {}
    function __wakeup() {}
    function __toString() {}
    function __set_state() {}
    function __clone() {}
    function __autoload() {}
    function __invoke() {}
    function __myFunction() {}
    function __my_function() {}

};

echo getSomeValue();

class my_test_case extends \PHPUnit\Framework\TestCase {

    protected function setUp()
    {
        parent::setUp(); // TODO: Change the autogenerated stub
    }

    protected function tearDown()
    {
        parent::tearDown(); // TODO: Change the autogenerated stub
    }

    public static function setUpBeforeClass()
    {
        parent::setUpBeforeClass(); // TODO: Change the autogenerated stub
    }

}
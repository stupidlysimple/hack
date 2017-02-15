<?hh
define('VENDOR_PATH', SS_PATH . '/vendor');

// Start autoloader
if (file_exists(VENDOR_PATH . '/autoload.php')) {
    require VENDOR_PATH . '/autoload.php';
}else{
    exit('Please install composer first.');
}

Core\Config::setEnv();

Core\Alias::init();
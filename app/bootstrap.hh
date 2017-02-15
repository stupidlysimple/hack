<?hh
$app = new App();
Router::start();
Router::dispatch();

if(getenv('SHOW_EXECUTION_TIME')){
    Debugger::exec_time();
}
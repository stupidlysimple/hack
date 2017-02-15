<?hh
/**
 * StupidlySimple Framework for Hack - A Framework For Hack-ers
 *
 * @package		StupidlySimple
 * @author		Fariz Luqman <fariz.fnb@gmail.com>
 * @copyright	2017 Fariz Luqman
 * @license		MIT
 * @link		https://stupidlysimple.github.io/hack/
 */

Router::get('', function() : void {
    Viewer::file('home');
});
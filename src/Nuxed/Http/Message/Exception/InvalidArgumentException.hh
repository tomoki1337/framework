<?hh // strict

namespace Nuxed\Http\Message\Exception;

use type InvalidArgumentException as ParentException;

class InvalidArgumentException
  extends ParentException
  implements ExceptionInterface {
}

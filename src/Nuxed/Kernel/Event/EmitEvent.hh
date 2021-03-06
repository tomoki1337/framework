<?hh // strict

namespace Nuxed\Kernel\Event;

use type Nuxed\Contract\Event\EventInterface;
use type Nuxed\Contract\Http\Message\ResponseInterface;

class EmitEvent implements EventInterface {
  public function __construct(public ResponseInterface $response) {}
}

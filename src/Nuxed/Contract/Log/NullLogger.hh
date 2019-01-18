<?hh // strict

namespace Nuxed\Contract\Log;

/**
 * This Logger can be used to avoid conditional log calls.
 *
 * Logging should always be optional, and if no logger is provided to your
 * library creating a NullLogger instance to have something to throw logs at
 * is a good way to avoid littering your code with `if ($this->logger) { }`
 * blocks.
 */
class NullLogger extends AbstractLogger {
  /**
   * Logs with an arbitrary level.
   */
  <<__Override>>
  public function log(
    LogLevel $_level,
    string $_message,
    KeyedContainer<string, mixed> $_context = dict[],
  ): void {
    // noop
  }

  <<__Override>>
  public function reset(): void {
    // noop
  }
}

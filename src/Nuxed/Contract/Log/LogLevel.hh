<?hh // strict

namespace Nuxed\Contract\Log;

/**
 * Describes log levels.
 */
enum LogLevel: string {
  EMERGENCY = 'emergency';
  ALERT = 'alert';
  CRITICAL = 'critical';
  ERROR = 'error';
  WARNING = 'warning';
  NOTICE = 'notice';
  INFO = 'info';
  DEBUG = 'debug';
}

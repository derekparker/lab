package conc

import (
  "time"
)

func IsReady(item string, seconds int64) {
  println("Waiting...")
  time.Sleep(time.Duration(seconds))
  println(item, "is ready!")
}

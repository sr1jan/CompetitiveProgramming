import itertools
from datetime import datetime, timedelta

from intervaltree import IntervalTree


class Event:
    id_iter = itertools.count()

    def __init__(self, start_time, end_time):
        self.id = next(self.id_iter)
        self.start_time = start_time
        self.end_time = end_time


if __name__ == "__main__":
    DURATION = 60
    events = [
        Event(
            datetime.now() + timedelta(minutes=i * 30),
            datetime.now() + timedelta(minutes=(i * 30) + DURATION),
        )
        for i in range(0, 3)
    ]

    t = IntervalTree()
    for e in events:
        # t[e.start_time.timestamp() : e.end_time.timestamp()] = e.id
        t.addi(e.start_time.timestamp(), e.end_time.timestamp(), [e.id, str(e.id)])

    print("Querying intervals...")

    for e in events:
        print(f"Search ID: {e.id} - {e.start_time}\t{e.end_time}")
        intersections = t[e.start_time.timestamp() : e.end_time.timestamp()]
        print([iv.data for iv in intersections])

    # for e in events:
    #     print(e.id, e.start_time, e.end_time)

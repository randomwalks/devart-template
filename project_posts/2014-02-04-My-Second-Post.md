###post_02: DATA source & architecture

####1st DATA source : google plus  API
-randomwalks page 
 1. total number of followers
 2. each follower’s public profile
 3. each follower’s activity moment / timecode (when he/she plus the page)
 4. each follower’s geocode

- plus.people.list
- plus.people.public profile
- plus.people.get (for a full person resource)

```
# code sample

```

"kind": "",
"etag": "",
"objectType": "person",
"id": "xxxxxxxxxxxxxxxxxxx",
"displayName": "xxxxxx",
"url": "https://plus.google.com/xxxxxxxxxxxxxxxxx",
"image": {
"url": "https://lh6.googleusercontent.com/-uk2fwbI-WrA/AAAAAAAAAAI/AAAAAAAAAKE/xxxxxxxxxxxxxxxxx"}
},


####2nd DATA source : lucky draw item API (RFID or other applicapable sensors)
- approx. 10 different kind of items
 1. match which follower gets which item (with RFID sensor)
 2. drawn time
 3. drawn geocode

===================================================
####prototyping 
1.access/parsing google plus API (Authorize requests using OAuth 2.0)



2.access/parse RFID sensored DATA  (saved on a local machine)


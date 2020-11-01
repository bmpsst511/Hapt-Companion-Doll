using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Param : MonoBehaviour
{
    public AudioPeer _audioPeer;
    public int _band;
    public float _startScale, _maxScale;
    public bool _userBuffer;
    Material _material;
    // Start is called before the first frame update
    void Start()
    {
        _material = GetComponent<MeshRenderer>().materials [0];
    }

    // Update is called once per frame
    void Update()
    {
        if(_userBuffer)
        {
            transform.localScale = new Vector3(transform.localScale.x, (_audioPeer._audioBandBuffer[_band] * _maxScale) + _startScale , transform.localScale.z);
            Color _color = new Color (_audioPeer._audioBandBuffer[_band], _audioPeer._audioBandBuffer[_band], _audioPeer._audioBandBuffer[_band]);
            _material.SetColor("_EmissionColor",_color);
        }
        if(!_userBuffer)
        {
            transform.localScale = new Vector3(transform.localScale.x, (_audioPeer._audioBand[_band] * _maxScale) + _startScale , transform.localScale.z);
            Color _color = new Color (_audioPeer._audioBand[_band], _audioPeer._audioBand[_band], _audioPeer._audioBand[_band]);
            _material.SetColor("_EmissionColor",_color);
        }
    }
}

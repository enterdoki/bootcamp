import React, { Component } from "react";
import Button from "@material-ui/core/Button";
import TextField from "@material-ui/core/TextField";
import "./Form.css";

class Form extends Component {
    constructor(props) {
        super(props);
        this.state = {
            first: props.first,
            last: props.last,
            subfirst: "",
            sublast: "",
            isHidden: true
        };
        this.baseState = this.state
        this.onSubmit = this.onSubmit.bind(this);
    }

    onFirstNameChange = event => {
        this.setState({ subfirst: event.target.value });
    };
    onLastNameChange = event => {   
        this.setState({ sublast: event.target.value });
    };

    onSubmit = (event) => {
        event.preventDefault();
        this.setState({first : this.state.subfirst, last:this.state.sublast});
    }

    toggleHidden = () => {
        this.setState({
          isHidden: !this.state.isHidden
        });
    }

    resetForm = () => {
        this.setState(this.baseState)
    }

    render () {
        return (
            <div className = "Form">
                <div>
                    <h2>First: {this.state.first}</h2>
                    <h2>Last: {this.state.last}</h2>
                    <Button
                        variant="outlined"
                        size="large"
                        color="primary"
                        onClick={this.toggleHidden}
                    >
                        Edit
                    </Button>
                </div>
                {!this.state.isHidden ? (
                    <div>
                    <form>
                    <div>
                    <TextField
                        label="Enter First Name"
                        placeholder="John"
                        className="TextField"
                        margin="normal"
                        variant="outlined"
                        onChange={this.onFirstNameChange}
                    />
                    </div>
                    <div>
                    <TextField
                        label="Enter Last Name"
                        placeholder="Smith"
                        className="TextField"
                        margin="normal"
                        variant="outlined"
                        onChange={this.onLastNameChange}
                    />
                    </div>
                    <div className = "Button">
                        <Button
                            variant="outlined"
                            size="large"
                            color="primary"
                            onClick={this.onSubmit}
                        >
                            Save
                        </Button>
                        <Button
                            variant="outlined"
                            size="large"
                            color="primary"
                            onClick={this.resetForm}
                        >
                            Cancel
                        </Button>
                    </div>
                    </form>
                        
                    
                    </div>
                )
                :
                (<div></div>   
                )}
                
                
            </div>
        )
    }
}

export default Form;